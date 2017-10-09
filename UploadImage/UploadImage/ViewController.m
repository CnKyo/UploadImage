//
//  ViewController.m
//  UploadImage
//
//  Created by wdy on 2017/10/9.
//  Copyright © 2017年 DY. All rights reserved.
//

#import "ViewController.h"
#import "DYUploadImage/DYUploadImage.h"

@interface ViewController () <DYUploadImageDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [DYUPLOAD_IMAGE showActionSheetInFatherViewController:self delegate:self];
}


- (void)uploadImageToServerWithImage:(UIImage *)image
{
    NSLog(@"%@", image);
}



@end
