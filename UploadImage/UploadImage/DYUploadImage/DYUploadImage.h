//
//  DYUploadImage.h
//  duolala
//
//  Created by wdy on 2017/10/9.
//  Copyright © 2017年 DY. All rights reserved.
//

#import <Foundation/Foundation.h>

// 单例宏
#define DYUPLOAD_IMAGE [DYUploadImage shareUploadImage]

@protocol DYUploadImageDelegate <NSObject>
@optional
- (void)uploadImageToServerWithImage:(UIImage *)image;
@end

@interface DYUploadImage : NSObject < UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    //如果你调不出来UIViewController,请添加UIKit头文件
    UIViewController *_fatherViewController;
}

@property (nonatomic, weak) id <DYUploadImageDelegate> uploadImageDelegate;
//单例方法
+ (DYUploadImage *)shareUploadImage;
//弹出选项的方法
- (void)showActionSheetInFatherViewController:(UIViewController *)fatherVC
                                     delegate:(id<DYUploadImageDelegate>)aDelegate;


@end
