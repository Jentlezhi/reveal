//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface UIView (XMCommon)
+ (void)load;
- (void)makeLarge:(struct CGSize)arg1;
- (id)xm_superViewWithClass:(Class)arg1;
- (struct UIEdgeInsets)xm_safeAreaInsets;
- (id)xm_viewController;
- (void)cornerMask:(double)arg1;
- (void)xm_imageView_borderColor_traitCollectionDidChange:(id)arg1;
- (void)xm_borderColor_traitCollectionDidChange:(id)arg1;
@property(retain, nonatomic) UIColor *xm_borderColor;
- (double)topCenterWith:(id)arg1;
@property(nonatomic) struct CGSize size;
@property(nonatomic) double height;
@property(nonatomic) double width;
@property(nonatomic) double centerY;
@property(nonatomic) double centerX;
@property(nonatomic) double bottom;
@property(nonatomic) double right;
@property(nonatomic) double top;
@property(nonatomic) double left;
@end

