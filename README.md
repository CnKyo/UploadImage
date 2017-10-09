# UploadImage
上传图片简单快捷

1. 引入头文件
2. 引入代理 DYUploadImageDelegate
3. 在需要上传头像的地方 '[DYUPLOAD_IMAGE showActionSheetInFatherViewController:self delegate:self];'
4. 根据自己需要实现代理方法 ‘- (void)uploadImageToServerWithImage:(UIImage *)image’
