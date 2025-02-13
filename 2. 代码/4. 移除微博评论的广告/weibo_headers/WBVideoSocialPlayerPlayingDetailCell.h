//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

@class WBVideoSocialPlayerPlayingAuthorContentView, WBVideoSocialPlayerPlayingInfoContentView, WBVideoSocialPlayerPlayingSocialContentView, WBVideoSocialPlayerStatusDetail;

@interface WBVideoSocialPlayerPlayingDetailCell : WBTableViewCell
{
    WBVideoSocialPlayerStatusDetail *_statusDetail;
    CDUnknownBlockType _repostActionBlock;
    WBVideoSocialPlayerPlayingInfoContentView *_infoContentView;
    WBVideoSocialPlayerPlayingSocialContentView *_socialContentView;
    WBVideoSocialPlayerPlayingAuthorContentView *_authorInfoView;
}

+ (double)rowHeightOfDataObject:(id)arg1 tableView:(id)arg2;
@property(retain, nonatomic) WBVideoSocialPlayerPlayingAuthorContentView *authorInfoView; // @synthesize authorInfoView=_authorInfoView;
@property(retain, nonatomic) WBVideoSocialPlayerPlayingSocialContentView *socialContentView; // @synthesize socialContentView=_socialContentView;
@property(retain, nonatomic) WBVideoSocialPlayerPlayingInfoContentView *infoContentView; // @synthesize infoContentView=_infoContentView;
@property(copy, nonatomic) CDUnknownBlockType repostActionBlock; // @synthesize repostActionBlock=_repostActionBlock;
@property(retain, nonatomic) WBVideoSocialPlayerStatusDetail *statusDetail; // @synthesize statusDetail=_statusDetail;
- (void).cxx_destruct;
- (void)updateWithUser:(id)arg1;
- (void)updateDisplay;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 userInfo:(id)arg3;

@end

