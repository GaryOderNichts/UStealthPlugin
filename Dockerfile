FROM wiiuenv/devkitppc:20220806

COPY --from=wiiuenv/wiiupluginsystem:20220826 /artifacts $DEVKITPRO

WORKDIR /project
