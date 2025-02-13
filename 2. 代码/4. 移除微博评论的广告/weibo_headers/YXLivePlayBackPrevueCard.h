//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, YXLivePlayBackPrevueModel;
@protocol YXLivePlayBackPrevueCardDelegate;

@interface YXLivePlayBackPrevueCard : UIView
{
    _Bool _hasShowed;
    _Bool _isActive;
    YXLivePlayBackPrevueModel *_model;
    id <YXLivePlayBackPrevueCardDelegate> _delegate;
    UIImageView *_imageView;
    UIView *_contentView;
    UILabel *_titleLable;
    UILabel *_subLable;
    UILabel *_desLable;
    UILabel *_button;
    UIButton *_closeButton;
    UIImageView *_adImageView;
}

@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *desLable; // @synthesize desLable=_desLable;
@property(retain, nonatomic) UILabel *subLable; // @synthesize subLable=_subLable;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool hasShowed; // @synthesize hasShowed=_hasShowed;
@property(nonatomic) __weak id <YXLivePlayBackPrevueCardDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YXLivePlayBackPrevueModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showInView:(id)arg1 frame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3;
- (void)showInView:(id)arg1 finalFrame:(struct CGRect)arg2;
- (void)close:(id)arg1;
- (void)tappedAdImage:(id)arg1;
- (void)tappedCard:(id)arg1;
- (void)tappedCardAcc:(id)arg1;
- (id)liveStartTimeText;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

