# SystemCall-Kernel-Linux
Make a System call with Linux Kernel.

## Requirements 

We eill use [Docker](https://www.docker.com/) to configure and manage our linux system.

Once you have docker installed in your pc, you will need to pull this container. 

```docker
docker pull gcc
```
Now you can run this command:

```docker
docker run gcc /bin/bash
```

Now we have our linux system running!

## System Details

To know which kernel you have type on terminal:

```bash
uname -r
```
This command will give you the kernel version.

## Install dependecies

```bin
apt-get update

apt-get install apt-file

apt-file update

apt-get install vim

apt-get install bc
```

## Steps to make System Call

### 1. Download the kernel source 

Type this command in your terminal: 

```bin
wget https://www.kernel.org/pub/linux/kernel/v4.x/linux-4.17.4.tar.xz
```
> Note that you have to download a kernel that has the same or higher version that your linux system. In this case, we will download Linux 4.17 becouse my bcc linux system is 4.16 v.

### 2. Extract the kernel source code

```bin
sudo tar -xvf linux-4.17.4.tar.xz -C/usr/src/
```

Then, change directory:

```bin
cd /usr/src/linux-4.17.4/
```