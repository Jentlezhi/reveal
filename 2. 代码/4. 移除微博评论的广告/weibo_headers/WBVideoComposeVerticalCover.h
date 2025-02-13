//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView, UILabel, WBBlockButton;

@interface WBVideoComposeVerticalCover : UIView
{
    WBBlockButton *_changeCoverBtn;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_verticalVideoImageView;
    UIActivityIndicatorView *_activityView;
    UILabel *_activityLabel;
    UIView *_huView;
    id _cover;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak id cover; // @synthesize cover=_cover;
@property(retain, nonatomic) UIView *huView; // @synthesize huView=_huView;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIImageView *verticalVideoImageView; // @synthesize verticalVideoImageView=_verticalVideoImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WBBlockButton *changeCoverBtn; // @synthesize changeCoverBtn=_changeCoverBtn;
- (void).cxx_destruct;
- (id)blurryImage:(id)arg1 withBlurLevel:(double)arg2;
- (id)getBlurBackgroundImage:(id)arg1;
- (id)croppedImage:(id)arg1 cropRect:(struct CGRect)arg2 scale:(double)arg3 orientation:(long long)arg4;
- (struct CGRect)orientCropRect:(struct CGRect)arg1 onImage:(id)arg2;
- (id)setupImage:(id)arg1 imageSize:(struct CGSize)arg2;
- (void)setAttachment:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

