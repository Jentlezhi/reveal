//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseNodeViewLayout.h"

@class NSArray, XMMVoteNode;

@interface XMMVoteNodeViewLayout : XMMBaseNodeViewLayout
{
    _Bool _canVote;
    NSArray *_voteItemFrameArray;
    struct CGRect _titleLabelFrame;
    struct CGRect _iconImageViewFrame;
    struct CGRect _statusLabelFrame;
    struct CGRect _endDateLabelFrame;
    struct CGRect _voteButtonFrame;
    struct CGRect _foldButtonFrame;
    struct CGRect _deleteButtonFrame;
}

@property(nonatomic) struct CGRect deleteButtonFrame; // @synthesize deleteButtonFrame=_deleteButtonFrame;
@property(nonatomic) struct CGRect foldButtonFrame; // @synthesize foldButtonFrame=_foldButtonFrame;
@property(nonatomic) struct CGRect voteButtonFrame; // @synthesize voteButtonFrame=_voteButtonFrame;
@property(nonatomic) struct CGRect endDateLabelFrame; // @synthesize endDateLabelFrame=_endDateLabelFrame;
@property(retain, nonatomic) NSArray *voteItemFrameArray; // @synthesize voteItemFrameArray=_voteItemFrameArray;
@property(nonatomic) struct CGRect statusLabelFrame; // @synthesize statusLabelFrame=_statusLabelFrame;
@property(nonatomic) struct CGRect iconImageViewFrame; // @synthesize iconImageViewFrame=_iconImageViewFrame;
@property(nonatomic) struct CGRect titleLabelFrame; // @synthesize titleLabelFrame=_titleLabelFrame;
@property(nonatomic) _Bool canVote; // @synthesize canVote=_canVote;
- (void).cxx_destruct;
- (_Bool)isExpiredForSize:(struct CGSize)arg1 model:(id)arg2 config:(id)arg3;
- (struct CGSize)layout;

// Remaining properties
@property(retain, nonatomic) XMMVoteNode *model; // @dynamic model;

@end

