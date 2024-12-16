include .env

ENV_NAME := ${CONDA_ENV_NAME}
PY_VERSION := ${PYTHON_VERSION}


env: 
	@conda create -n ${ENV_NAME} python==${PY_VERSION}

install:
	@pip install -r requirements.txt
