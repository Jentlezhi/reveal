//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WBSTVSBaseHeaderView, WBStoryItemSegment;

@interface WBSTHeaderContainer : UIView
{
    WBSTVSBaseHeaderView *_header;
    unsigned long long _headerStyleType;
    WBStoryItemSegment *_segment;
}

@property(retain, nonatomic) WBStoryItemSegment *segment; // @synthesize segment=_segment;
@property(nonatomic) unsigned long long headerStyleType; // @synthesize headerStyleType=_headerStyleType;
@property(retain, nonatomic) WBSTVSBaseHeaderView *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)followButton;
- (id)moreButton;
- (unsigned long long)headerTypeWith:(id)arg1;
- (void)setShowTimeLabel:(_Bool)arg1;
- (_Bool)showTimeLabel;
- (void)updateFollowState;
- (void)doSuccessFollowAnimation;
- (void)configWithSegment:(id)arg1 delegate:(id)arg2;

@end

