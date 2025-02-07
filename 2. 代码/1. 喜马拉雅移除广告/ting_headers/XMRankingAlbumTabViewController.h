//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMRankingTagsViewDelegate-Protocol.h"
#import "XMSegmentTabViewCtrolDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, XMCategoryItem, XMRankItem, XMRankingTagsView, XMSegmentTabViewController, XMWebImageButton;

@interface XMRankingAlbumTabViewController : XMSubLevelViewController <XMSegmentTabViewCtrolDelegate, XMRankingTagsViewDelegate>
{
    NSArray *_categoryArray;
    XMRankItem *_rank;
    XMCategoryItem *_category;
    NSMutableDictionary *_viewControllers;
    long long _tagIndex;
    XMSegmentTabViewController *_segmentController;
    XMRankingTagsView *_tabView;
    XMWebImageButton *_bannerView;
}

@property(retain, nonatomic) XMWebImageButton *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) XMRankingTagsView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) XMSegmentTabViewController *segmentController; // @synthesize segmentController=_segmentController;
@property(nonatomic) long long tagIndex; // @synthesize tagIndex=_tagIndex;
@property(retain, nonatomic) NSMutableDictionary *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) XMCategoryItem *category; // @synthesize category=_category;
@property(retain, nonatomic) XMRankItem *rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSArray *categoryArray; // @synthesize categoryArray=_categoryArray;
- (void).cxx_destruct;
- (void)postChangeSegmentDataTrack:(id)arg1;
- (long long)getSubCategoryId;
- (void)hideRankingView;
- (void)hideTagView;
- (void)onTagClicked:(id)arg1;
- (void)onRightButtonClicked:(id)arg1;
- (void)onLowMemory;
- (void)didReceiveMemoryWarning;
- (void)segmentCtrol:(id)arg1 transitionAtController:(id)arg2;
- (id)segmentCtrol:(id)arg1 controllerAtIndex:(long long)arg2;
- (id)segmentCtrolTitles:(id)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

