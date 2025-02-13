//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseCell.h"

@class CDZAttributedString, UILabel, UIView, XMMMessage, XMMMessagePreview, XMWebImageView;

@interface XMMMessageCenterCell : XMMBaseCell
{
    CDZAttributedString *_formatString;
    XMWebImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UIView *_redDot;
    UILabel *_contentLabel;
    XMMMessagePreview *_preview;
}

@property(retain, nonatomic) XMMMessagePreview *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) XMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)layoutSubviewsWithSize:(struct CGSize)arg1;
- (void)initializationLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(retain, nonatomic) XMMMessage *model; // @dynamic model;
- (void)didInitialize;

@end

