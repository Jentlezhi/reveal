//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMGChatBaseCell.h"

@class UIImageView, UILabel;

@interface XMGChatVoiceCell : XMGChatBaseCell
{
    UIImageView *_voiceIcon;
    UILabel *_voiceDuration;
    UIImageView *_unreadIcon;
}

- (void).cxx_destruct;
- (void)updateVoiceIcon;
- (void)onPlay;
- (void)remakeConstraintsForMe;
- (void)remakeConstraintsForOther;
- (void)setItem:(id)arg1;
- (void)customInit;

@end

