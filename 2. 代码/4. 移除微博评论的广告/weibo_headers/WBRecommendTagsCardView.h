//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

#import "WBLoginTagListViewDelegate-Protocol.h"

@class NSString, WBLoginTagListView;
@protocol WBRecommendTagsCardViewDelegate;

@interface WBRecommendTagsCardView : WBTableViewCell <WBLoginTagListViewDelegate>
{
    id <WBRecommendTagsCardViewDelegate> _delegate;
    WBLoginTagListView *_tagListView;
}

+ (double)cellHeightWithTagGroup:(id)arg1 withWidth:(double)arg2;
@property(retain, nonatomic) WBLoginTagListView *tagListView; // @synthesize tagListView=_tagListView;
@property(nonatomic) __weak id <WBRecommendTagsCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectedTag:(id)arg1 tagIndex:(long long)arg2;
- (void)configData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithRecommendTagsView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

