//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface YXLotteryMainBoard : UIView
{
    UILabel *_titleLabel;
    UIButton *_rightButton;
    CDUnknownBlockType _dismissBlock;
    UIImageView *_backImgView;
    UIButton *_backButton;
}

@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIImageView *backImgView; // @synthesize backImgView=_backImgView;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)didClickBackButton;
- (void)shouldHideBackButton:(_Bool)arg1;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

