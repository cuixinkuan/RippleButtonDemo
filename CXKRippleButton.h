//
//  CXKRippleButton.h
//  RippleButtonDemo
//
//  Created by admin on 15/11/12.
//  Copyright © 2015年 CXK. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^CXKflashbuttonDidClickBlock)(void);
typedef NS_ENUM(NSUInteger,CXKFlashbuttonType) {
    CXKFlashbuttonTypeInner = 0,
    CXKFlashbuttonTypeOuter = 1
};

@interface CXKRippleButton : UIView

@property (nonatomic,strong) UILabel * textlabel;
@property (nonatomic,assign) CXKFlashbuttonType buttonType;
@property (nonatomic,copy) CXKflashbuttonDidClickBlock clickBlock;
@property (nonatomic,strong) UIColor * flashColor;

- (void) setText:(NSString *)text;
- (void) setTextColor:(UIColor *)textColor;
- (void) setText:(NSString *)text withTextColor:(UIColor *)textColor;

@end
