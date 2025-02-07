//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XMFMHeadInterestViewDelegate-Protocol.h"

@class MJRefreshAutoNormalFooter, NSString, UIButton, XMFMHeadInterestView, XMFMPlaylistTableView;

@interface XMFMPlayListPopView : UIView <UITableViewDelegate, UITableViewDataSource, XMFMHeadInterestViewDelegate>
{
    CDUnknownBlockType _numberOfRowsInSection;
    CDUnknownBlockType _dataWithIndex;
    CDUnknownBlockType _shouldShowSubChannel;
    CDUnknownBlockType _didSelectRowAtIndexPath;
    CDUnknownBlockType _footerWithRefreshingBlock;
    CDUnknownBlockType _didSelectWithChannels;
    double _topSpace;
    double _dismissSpace;
    XMFMHeadInterestView *_fmInterestView;
    XMFMPlaylistTableView *_interestTableView;
    UIView *_interestPopBackView;
    UIView *_sliderView;
    UIButton *_dismissButton;
    MJRefreshAutoNormalFooter *_footer;
}

@property(retain, nonatomic) MJRefreshAutoNormalFooter *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) UIView *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) UIView *interestPopBackView; // @synthesize interestPopBackView=_interestPopBackView;
@property(retain, nonatomic) XMFMPlaylistTableView *interestTableView; // @synthesize interestTableView=_interestTableView;
@property(retain, nonatomic) XMFMHeadInterestView *fmInterestView; // @synthesize fmInterestView=_fmInterestView;
@property(nonatomic) double dismissSpace; // @synthesize dismissSpace=_dismissSpace;
@property(nonatomic) double topSpace; // @synthesize topSpace=_topSpace;
@property(copy, nonatomic) CDUnknownBlockType didSelectWithChannels; // @synthesize didSelectWithChannels=_didSelectWithChannels;
@property(copy, nonatomic) CDUnknownBlockType footerWithRefreshingBlock; // @synthesize footerWithRefreshingBlock=_footerWithRefreshingBlock;
@property(copy, nonatomic) CDUnknownBlockType didSelectRowAtIndexPath; // @synthesize didSelectRowAtIndexPath=_didSelectRowAtIndexPath;
@property(copy, nonatomic) CDUnknownBlockType shouldShowSubChannel; // @synthesize shouldShowSubChannel=_shouldShowSubChannel;
@property(copy, nonatomic) CDUnknownBlockType dataWithIndex; // @synthesize dataWithIndex=_dataWithIndex;
@property(copy, nonatomic) CDUnknownBlockType numberOfRowsInSection; // @synthesize numberOfRowsInSection=_numberOfRowsInSection;
- (void).cxx_destruct;
- (void)shouldShowSubChannel:(_Bool)arg1;
- (void)didSwipeHeader;
- (void)didFinishRequestWithConent:(id)arg1;
- (void)didChangeInterest;
- (void)selectWithChannels:(id)arg1;
- (void)didUpdateFrame:(struct CGRect)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadData;
- (void)hide;
- (void)hideList:(struct CGRect)arg1 withCompltion:(CDUnknownBlockType)arg2;
- (void)hideListWithCompltion:(CDUnknownBlockType)arg1;
- (void)showListInView:(id)arg1 withCompltion:(CDUnknownBlockType)arg2;
- (void)p_showWithCompltion:(CDUnknownBlockType)arg1;
- (void)p_dismissWithCompltion:(CDUnknownBlockType)arg1;
- (void)p_panAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)p_popHeight;
- (double)p_dismissSpace;
- (double)p_topSpace;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

