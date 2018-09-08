//
//  SYPhotoViewController.h
//  SYPhotoBrowser
//
//  Created by Sunnyyoung on 16/3/30.
//  Copyright © 2016年 Sunnyyoung. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SDWebImage/UIImageView+WebCache.h>
#import <DACircularProgress/DACircularProgressView.h>

@interface SYPhotoViewController : UIViewController

@property (nonatomic, assign, readonly) NSUInteger pageIndex;
@property (nonatomic, strong, readonly) id imageSource;
@property (nonatomic, strong, readonly) UIImage *loadedImage;

- (instancetype)initWithImageSouce:(id)imageSouce pageIndex:(NSUInteger)pageIndex;
- (void)resetImageSize;

@end
