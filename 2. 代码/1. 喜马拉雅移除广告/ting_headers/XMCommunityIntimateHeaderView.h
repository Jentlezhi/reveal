//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMCommunityHeaderView.h"

@class UIButton, XMCommunityExpiredView;

@interface XMCommunityIntimateHeaderView : XMCommunityHeaderView
{
    UIButton *_inviteButton;
    UIButton *_renewButton;
    XMCommunityExpiredView *_expiredView;
}

@property(retain, nonatomic) XMCommunityExpiredView *expiredView; // @synthesize expiredView=_expiredView;
@property(retain, nonatomic) UIButton *renewButton; // @synthesize renewButton=_renewButton;
@property(retain, nonatomic) UIButton *inviteButton; // @synthesize inviteButton=_inviteButton;
- (void).cxx_destruct;
- (void)clickRenewButton:(id)arg1;
- (void)clickInviteButton:(id)arg1;
- (void)layoutSubviewsWithSize:(struct CGSize)arg1;
- (void)setRenewInfo:(id)arg1;
- (void)updateOptionButtonArray;
- (void)setTheme:(id)arg1;

@end

