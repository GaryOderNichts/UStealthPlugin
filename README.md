## Archival Notice: This patch is now integrated into the [AromaBasePlugin](https://github.com/wiiu-env/AromaBasePlugin) which is part of Aroma by default.
# UStealthPlugin
[Aroma](https://aroma.foryour.cafe/) plugin which stops the Wii U menu from complaining about "PC formatted" drives.

## Installation instructions
Make sure you're using [Aroma](https://aroma.foryour.cafe/), then download and copy the `UStealthPlugin.wps` to `wiiu/environments/aroma/plugins`.

## Building
```bash
# Build docker image (only needed once)
docker build . -t builder

# make 
docker run -it --rm -v ${PWD}:/project builder make

# make clean
docker run -it --rm -v ${PWD}:/project builder make clean
```
