//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface XMYiJianTingNightTips : UIView
{
    UIImageView *_iv;
    UILabel *_mainLabel;
    UILabel *_subLabel;
    UIImageView *_arrow;
    UIButton *_bgView;
}

@property(retain, nonatomic) UIButton *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) UIImageView *iv; // @synthesize iv=_iv;
- (void).cxx_destruct;
- (void)hideTips;
- (void)showInView:(id)arg1 TargetView:(id)arg2;
- (id)init;

@end

