FROM db-container-lib-docker-release-local.bahnhub.tech.rz.db.de/ubuntu:24.04

ARG TARGETARCH
ARG DEBIAN_FRONTEND=noninteractive
ARG VIM_URL="https://github.com/neovim/neovim/releases/download/nightly"
ARG TS_URL="https://github.com/tree-sitter/tree-sitter/releases/download/v0.25.10"
ARG YAZI_URL="https://github.com/sxyazi/yazi/releases/download/v25.5.28"

USER root

RUN apt-get update && \
    apt-get install --no-install-recommends -y \
    build-essential \
    libncurses-dev \
    git \
    ripgrep \
    stow \
    universal-ctags \
    unzip && \
    rm -rf /var/lib/apt/lists/*
RUN cd /tmp && \
    git clone https://github.com/vim/vim.git && \
    cd vim/src && \
    make install && \
    cd /tmp && \
    rm -rf vim
RUN if [ "$TARGETARCH" = "arm64" ]; \
    then TS_GZ="tree-sitter-linux-arm64.gz"; \
    else TS_GZ="tree-sitter-linux-x64.gz"; \
    fi && \
    mkdir -p /opt/tree-sitter && \
    curl -L -o /opt/tree-sitter/${TS_GZ} ${TS_URL}/${TS_GZ} && \
    gunzip /opt/tree-sitter/${TS_GZ} && \
    chmod 755 /opt/tree-sitter/${TS_GZ%.gz} && \
    ln -s /opt/tree-sitter/${TS_GZ%.gz} /usr/local/bin/tree-sitter
RUN if [ "$TARGETARCH" = "arm64" ]; \
    then VIM_TAR="nvim-linux-arm64.tar.gz"; \
    else VIM_TAR="nvim-linux-x86_64.tar.gz"; \
    fi && \
    curl -L -o /tmp/${VIM_TAR} ${VIM_URL}/${VIM_TAR} && \
    tar -xzf /tmp/${VIM_TAR} -C /opt && \
    VIM_BINARY="/opt/${VIM_TAR%.tar.gz}/bin/nvim" && \
    ln -s ${VIM_BINARY} /usr/local/bin/nvim && \
    rm -rf /tmp/${VIM_TAR}
RUN if [ "$TARGETARCH" = "arm64" ]; \
    then YAZI_ZIP="yazi-aarch64-unknown-linux-gnu.zip"; \
    else YAZI_ZIP="yazi-x86_64-unknown-linux-gnu.zip"; \
    fi && \
    curl -L -o /tmp/${YAZI_ZIP} ${YAZI_URL}/${YAZI_ZIP} && \
    unzip /tmp/${YAZI_ZIP} -d /opt && \
    YAZI_BINARY="/opt/${YAZI_ZIP%.zip}/yazi" && \
    ln -s ${YAZI_BINARY} /usr/local/bin/yazi && \
    rm /tmp/${YAZI_ZIP}

USER 1000
