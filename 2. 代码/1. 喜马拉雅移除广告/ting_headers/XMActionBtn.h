//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILabel, UISwitch, XMAlertAction, XMWebImageView;

@interface XMActionBtn : UIButton
{
    XMAlertAction *_action;
    XMWebImageView *_logoImageView;
    UILabel *_title;
    UILabel *_subTitle;
    UISwitch *_sw;
    UILabel *_tailTitle;
}

+ (double)heightForAction:(id)arg1;
@property(retain, nonatomic) UILabel *tailTitle; // @synthesize tailTitle=_tailTitle;
@property(retain, nonatomic) UISwitch *sw; // @synthesize sw=_sw;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) XMWebImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) XMAlertAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)onSwitch:(id)arg1;
- (void)layoutSubviews;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

