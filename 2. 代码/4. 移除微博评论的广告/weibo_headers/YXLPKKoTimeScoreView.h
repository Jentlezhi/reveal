//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, NSTimer, UIImageView, UILabel, YXLPKKoTimeModel;

@interface YXLPKKoTimeScoreView : UIView
{
    CDUnknownBlockType _countdownBlock;
    UIView *_bgView;
    UIImageView *_bgImgView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIView *_honourView;
    CAGradientLayer *_bgLayer;
    UILabel *_honourLabel;
    CALayer *_maskLayer;
    YXLPKKoTimeModel *_koModel;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) YXLPKKoTimeModel *koModel; // @synthesize koModel=_koModel;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UILabel *honourLabel; // @synthesize honourLabel=_honourLabel;
@property(retain, nonatomic) CAGradientLayer *bgLayer; // @synthesize bgLayer=_bgLayer;
@property(retain, nonatomic) UIView *honourView; // @synthesize honourView=_honourView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType countdownBlock; // @synthesize countdownBlock=_countdownBlock;
- (void).cxx_destruct;
- (void)deallocCountdownTimer;
- (void)countdown;
- (void)starCountdownTimer;
- (void)updateHonourProgressWith:(long long)arg1;
- (void)layout;
- (void)createUI;
- (id)initWithkoTimeModel:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;

@end

