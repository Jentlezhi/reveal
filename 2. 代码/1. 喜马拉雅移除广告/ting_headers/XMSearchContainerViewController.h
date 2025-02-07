//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "XMSearchContainerHeaderDelegate-Protocol.h"
#import "XMVXPageViewControllerDataSource-Protocol.h"
#import "XMVXPageViewControllerDelegate-Protocol.h"

@class NSArray, NSString, XMNRequest, XMSearchContainerHeader, XMSearchHotWordModel, XMSegmentControl, XMVXPageViewController;

@interface XMSearchContainerViewController : XMBaseViewController <XMVXPageViewControllerDelegate, XMVXPageViewControllerDataSource, UIScrollViewDelegate, XMSearchContainerHeaderDelegate>
{
    _Bool _searchNewUser;
    _Bool _scrollToRank;
    _Bool _recReqFailed;
    _Bool _tabReqFailed;
    NSString *_searchId;
    long long _categoryId;
    XMSearchHotWordModel *_searchHotModel;
    CDUnknownBlockType _hotWordDidClickHandler;
    CDUnknownBlockType _historyClickHandler;
    CDUnknownBlockType _recClickHandler;
    long long _searchModel;
    NSString *_categoryTitle;
    XMNRequest *_req;
    XMNRequest *_historyReq;
    NSArray *_tabList;
    NSArray *_recModels;
    XMVXPageViewController *_pageVc;
    XMSegmentControl *_segmentControl;
    XMSearchContainerHeader *_headerView;
    double _floatingY;
}

@property(nonatomic) double floatingY; // @synthesize floatingY=_floatingY;
@property(nonatomic) _Bool tabReqFailed; // @synthesize tabReqFailed=_tabReqFailed;
@property(nonatomic) _Bool recReqFailed; // @synthesize recReqFailed=_recReqFailed;
@property(retain, nonatomic) XMSearchContainerHeader *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) XMSegmentControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) XMVXPageViewController *pageVc; // @synthesize pageVc=_pageVc;
@property(retain, nonatomic) NSArray *recModels; // @synthesize recModels=_recModels;
@property(retain, nonatomic) NSArray *tabList; // @synthesize tabList=_tabList;
@property(retain, nonatomic) XMNRequest *historyReq; // @synthesize historyReq=_historyReq;
@property(retain, nonatomic) XMNRequest *req; // @synthesize req=_req;
@property(copy, nonatomic) NSString *categoryTitle; // @synthesize categoryTitle=_categoryTitle;
@property(nonatomic) long long searchModel; // @synthesize searchModel=_searchModel;
@property(copy, nonatomic) CDUnknownBlockType recClickHandler; // @synthesize recClickHandler=_recClickHandler;
@property(copy, nonatomic) CDUnknownBlockType historyClickHandler; // @synthesize historyClickHandler=_historyClickHandler;
@property(copy, nonatomic) CDUnknownBlockType hotWordDidClickHandler; // @synthesize hotWordDidClickHandler=_hotWordDidClickHandler;
@property(retain, nonatomic) XMSearchHotWordModel *searchHotModel; // @synthesize searchHotModel=_searchHotModel;
@property(nonatomic) _Bool scrollToRank; // @synthesize scrollToRank=_scrollToRank;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) _Bool searchNewUser; // @synthesize searchNewUser=_searchNewUser;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
- (void).cxx_destruct;
- (id)categoryRankTitleLabel;
- (void)searchContainerHeaderDidClickRec:(id)arg1 atIndex:(long long)arg2;
- (void)searchContainerHeaderDidClickHistory:(id)arg1 atIndex:(long long)arg2;
- (void)searchContainerHeaderDidClickDelete;
- (void)searchContainerHeaderDidClickUnFold;
- (id)viewControllerAtIndex:(long long)arg1;
- (void)segmentedControlChangedValue:(long long)arg1;
- (id)segmentCtrolTitles;
- (void)vxPageViewController:(id)arg1 floatingViewOriginDidChange:(struct CGPoint)arg2;
- (id)vxPageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)vxPageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)shouldShowNoNetView;
- (_Bool)shouldShowEmptyView;
- (void)triggerPullToRefresh;
- (void)pageVcReload;
- (void)parseSearchRecJSON:(id)arg1;
- (void)requestSearchRecModels;
- (void)parseTabResponse:(id)arg1;
- (void)fetchRankTabs;
- (void)scrollToHotSearch;
- (id)historyModelsWithHistory:(id)arg1;
- (void)checkHistoryUpdateWithModels:(id)arg1;
- (void)removeUpdatedHistory:(id)arg1;
- (void)reloadHistoryToCheckUpdate:(_Bool)arg1;
- (void)setupPageVc;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

