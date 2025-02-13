//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseNodeView.h"

@class NSArray, NSMutableArray, UIButton, UIImageView, UILabel, XMMVoteNode, XMMVoteNodeViewLayout;

@interface XMMVoteNodeView : XMMBaseNodeView
{
    _Bool _folded;
    long long _diplayCountWhenFolded;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    UILabel *_statusLabel;
    NSMutableArray *_voteItemViewArray;
    UILabel *_endDateLabel;
    UIButton *_voteButton;
    UIButton *_foldButton;
}

@property(retain, nonatomic) UIButton *foldButton; // @synthesize foldButton=_foldButton;
@property(retain, nonatomic) UIButton *voteButton; // @synthesize voteButton=_voteButton;
@property(retain, nonatomic) UILabel *endDateLabel; // @synthesize endDateLabel=_endDateLabel;
@property(retain, nonatomic) NSMutableArray *voteItemViewArray; // @synthesize voteItemViewArray=_voteItemViewArray;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long diplayCountWhenFolded; // @synthesize diplayCountWhenFolded=_diplayCountWhenFolded;
@property(nonatomic) _Bool folded; // @synthesize folded=_folded;
- (void).cxx_destruct;
- (id)deleteButton;
@property(copy, nonatomic) NSArray *selectedVoteItemArray;
- (void)setShowDeleteButton:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (long long)selectedCount;
- (void)voteItemViewDidTap:(id)arg1;
- (void)clickFoldButton:(id)arg1;
- (void)clickVoteButton:(id)arg1;
- (void)resetColor;
- (void)updateColorWithTheme:(id)arg1;
@property(retain, nonatomic) XMMVoteNodeViewLayout *layout; // @dynamic layout;
- (void)createVoteItemViewWithCount:(long long)arg1;
- (void)clickDeleteButton:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateVoteItemViews;
- (void)updateFoldedButton;
- (void)setDelegate:(id)arg1;
- (void)reset;
- (void)reuseWithNode:(id)arg1;
- (void)didInitialize;

// Remaining properties
@property(retain, nonatomic) XMMVoteNode *node; // @dynamic node;

@end

