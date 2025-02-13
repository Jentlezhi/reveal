//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UIImageView, YXLiveGradientAvatorView;

@interface YXLiveAudienceListItem : UIView
{
    _Bool _animated;
    _Bool _showSceneIcon;
    _Bool _rankStyle;
    NSDictionary *_model;
    double _animDuration;
    YXLiveGradientAvatorView *_avatorView;
    UIImageView *_rankIcon;
    UIImageView *_rightauthImageView;
}

@property(retain, nonatomic) UIImageView *rightauthImageView; // @synthesize rightauthImageView=_rightauthImageView;
@property(retain, nonatomic) UIImageView *rankIcon; // @synthesize rankIcon=_rankIcon;
@property(retain, nonatomic) YXLiveGradientAvatorView *avatorView; // @synthesize avatorView=_avatorView;
@property(nonatomic) _Bool rankStyle; // @synthesize rankStyle=_rankStyle;
@property(nonatomic) _Bool showSceneIcon; // @synthesize showSceneIcon=_showSceneIcon;
@property(nonatomic) double animDuration; // @synthesize animDuration=_animDuration;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(copy, nonatomic) NSDictionary *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)addLevel:(long long)arg1;
- (void)addNobleLevel:(long long)arg1;
- (long long)getItemRankType:(long long)arg1;
- (long long)getItemType:(long long)arg1;
- (void)setItemType:(long long)arg1 WithRankType:(long long)arg2;
- (void)updateRankIcon:(id)arg1;
- (void)setContributionValue:(long long)arg1;
- (void)setAvatorWithUrl:(id)arg1;
- (void)setContributionRankValue:(id)arg1;
- (long long)getNobleLevel:(id)arg1;
- (void)viewUpdateConstraints;
- (void)initView;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;

@end

