//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

@class UILabel, WBStoryLineView;

@interface WBStoryCommentTeenagerTipsCell : WBTableViewCell
{
    WBStoryLineView *_leftLine;
    WBStoryLineView *_rightLine;
    UILabel *_tipsLabel;
}

@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WBStoryLineView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) WBStoryLineView *leftLine; // @synthesize leftLine=_leftLine;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

