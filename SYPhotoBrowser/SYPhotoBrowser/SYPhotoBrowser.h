//
//  SYPhotoBrowser.h
//  SYPhotoBrowser
//
//  Created by Sunnyyoung on 16/3/30.
//  Copyright © 2016年 Sunnyyoung. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SYPhotoViewController.h"

static NSString * const SYPhotoBrowserDismissNotification   = @"SYPhotoBrowserDismissNotification";
static NSString * const SYPhotoBrowserLongPressNotification = @"SYPhotoBrowserLongPressNotification";

@class SYPhotoBrowser;

typedef NS_ENUM(NSUInteger, SYPhotoBrowserPageControlStyle) {
    SYPhotoBrowserPageControlStyleSystem = 0,
    SYPhotoBrowserPageControlStyleLabel
};

@protocol SYPhotoBrowserDelegate <NSObject>

@optional
- (void)photoBrowser:(SYPhotoBrowser *)photoBrowser didLongPressImage:(UIImage *)image atPageIndex:(NSInteger)pageIndex;

@end

@interface SYPhotoBrowser : UIPageViewController

- (instancetype)initWithImageSourceArray:(NSArray *)imageSourceArray caption:(NSString *)caption;
- (instancetype)initWithImageSourceArray:(NSArray *)imageSourceArray caption:(NSString *)caption delegate:(id)delegate;

@property (nonatomic, assign) NSUInteger initialPageIndex;
@property (nonatomic, assign) SYPhotoBrowserPageControlStyle pageControlStyle;
@property (nonatomic, copy) void(^didLongPressImageBlock)(SYPhotoBrowser *photoBrowser, UIImage *image, NSInteger pageIndex);
@property (nonatomic, assign, readonly) NSInteger currentPageIndex;
@property (nonatomic, assign, readonly) SYPhotoViewController *currentPhotoViewController;


@end
