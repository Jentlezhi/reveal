//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LOTAnimationView, NSArray, UIButton, UIImageView, UILabel, XMTouTiaoTingModel, XMWebImageView;

@interface XMTouTiaoTingHeaderView : UIView
{
    _Bool _subscribeStatus;
    NSArray *_playList;
    XMWebImageView *_backImageView;
    UIButton *_playButton;
    UIButton *_subscribeButton;
    UILabel *_channelLabel;
    UILabel *_descLabel;
    LOTAnimationView *_playingView;
    XMTouTiaoTingModel *_touTiaoTingModel;
    UIImageView *_coverImageView;
}

@property(nonatomic) _Bool subscribeStatus; // @synthesize subscribeStatus=_subscribeStatus;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) XMTouTiaoTingModel *touTiaoTingModel; // @synthesize touTiaoTingModel=_touTiaoTingModel;
@property(retain, nonatomic) LOTAnimationView *playingView; // @synthesize playingView=_playingView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *channelLabel; // @synthesize channelLabel=_channelLabel;
@property(retain, nonatomic) UIButton *subscribeButton; // @synthesize subscribeButton=_subscribeButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) XMWebImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) NSArray *playList; // @synthesize playList=_playList;
- (void).cxx_destruct;
- (void)setDefaultTrackTitle:(id)arg1 andSubscribeStatus:(_Bool)arg2;
- (void)setContentWithModel:(id)arg1;
- (void)updatePlayAnimation;
- (void)playerNotificationHandle:(id)arg1;
- (void)tapDesc;
- (void)subscribe;
- (void)play;
- (void)setLayouts;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

