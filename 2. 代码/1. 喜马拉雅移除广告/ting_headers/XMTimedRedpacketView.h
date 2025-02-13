//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, XMRedPacketModel;

@interface XMTimedRedpacketView : UIView
{
    XMRedPacketModel *_topRedpacket;
    UIView *_flexibleView;
    UILabel *_countdownLabel;
    UILabel *_badgeView;
    UILabel *_hangeLabel;
    UIImageView *_hangeTimedRedpacketView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *hangeTimedRedpacketView; // @synthesize hangeTimedRedpacketView=_hangeTimedRedpacketView;
@property(retain, nonatomic) UILabel *hangeLabel; // @synthesize hangeLabel=_hangeLabel;
@property(retain, nonatomic) UILabel *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) UIView *flexibleView; // @synthesize flexibleView=_flexibleView;
@property(retain, nonatomic) XMRedPacketModel *topRedpacket; // @synthesize topRedpacket=_topRedpacket;
- (void)showBadgeNumber:(long long)arg1;
- (void)updateTimedRedpacketStatus;
- (void)updateCountdownText:(id)arg1;
- (void)endTimeCountdown;
- (void)beginTimeCountdown;
- (void)addLayoutConstrants;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

