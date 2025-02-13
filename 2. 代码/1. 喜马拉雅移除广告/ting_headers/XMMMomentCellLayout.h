//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMNormalCellLayout.h"

@class XMMMomentCellLayoutConfig, XMMNodeListViewLayout;

@interface XMMMomentCellLayout : XMMNormalCellLayout
{
    _Bool _isEssence;
    _Bool _isVoteNodeViewFolded;
    _Bool _canVote;
    XMMNodeListViewLayout *_nodeListViewLayout;
}

@property(retain, nonatomic) XMMNodeListViewLayout *nodeListViewLayout; // @synthesize nodeListViewLayout=_nodeListViewLayout;
@property(readonly, nonatomic) _Bool canVote; // @synthesize canVote=_canVote;
@property(readonly, nonatomic) _Bool isVoteNodeViewFolded; // @synthesize isVoteNodeViewFolded=_isVoteNodeViewFolded;
@property(readonly, nonatomic) _Bool isEssence; // @synthesize isEssence=_isEssence;
- (void).cxx_destruct;
- (struct CGSize)layout;
- (_Bool)isExpiredForSize:(struct CGSize)arg1 model:(id)arg2 config:(id)arg3;
- (void)didInitialize;

// Remaining properties
@property(readonly, nonatomic) XMMMomentCellLayoutConfig *config; // @dynamic config;

@end

