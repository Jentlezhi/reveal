//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMCategoryTabViewDelegate-Protocol.h"
#import "XMSegmentTabViewCtrolDelegate-Protocol.h"
#import "XMSegmentTagsViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, UIButton, UILabel, UIView, XMCategoryItem, XMCategoryTabView, XMSegmentTabViewController, XMSegmentTagsView, XMServerRequest;

@interface XMCategoryTabViewController : XMSubLevelViewController <XMSegmentTabViewCtrolDelegate, XMCategoryTabViewDelegate, XMSegmentTagsViewDelegate>
{
    NSString *_tagKey;
    long long _tagIndex;
    long long _condition;
    long long _state;
    _Bool _showALlButton;
    UIView *_topView;
    UIButton *_searchButton;
    _Bool _isPaidCategory;
    NSMutableArray *_insertTags;
    NSString *_defaultTag;
    long long _needToAll;
    NSMutableDictionary *_viewControllers;
    XMSegmentTabViewController *_tabController;
    XMCategoryItem *_categoryItem;
    XMServerRequest *_tgRerequest;
    NSMutableArray *_tagsArray;
    NSMutableArray *_tabs;
    NSDictionary *_cacheTags;
    XMCategoryTabView *_categoryTabView;
    XMServerRequest *_filteRequest;
    XMServerRequest *_searchAlertRequest;
    UILabel *_searchAlertLabel;
    XMSegmentTagsView *_tabView;
    NSNumber *_gender;
}

@property(retain, nonatomic) NSNumber *gender; // @synthesize gender=_gender;
@property(nonatomic) _Bool isPaidCategory; // @synthesize isPaidCategory=_isPaidCategory;
@property(retain, nonatomic) XMSegmentTagsView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) UILabel *searchAlertLabel; // @synthesize searchAlertLabel=_searchAlertLabel;
@property(retain, nonatomic) XMServerRequest *searchAlertRequest; // @synthesize searchAlertRequest=_searchAlertRequest;
@property(retain, nonatomic) XMServerRequest *filteRequest; // @synthesize filteRequest=_filteRequest;
@property(retain, nonatomic) XMCategoryTabView *categoryTabView; // @synthesize categoryTabView=_categoryTabView;
@property(retain, nonatomic) NSDictionary *cacheTags; // @synthesize cacheTags=_cacheTags;
@property(retain, nonatomic) NSMutableArray *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) NSMutableArray *tagsArray; // @synthesize tagsArray=_tagsArray;
@property(retain, nonatomic) XMServerRequest *tgRerequest; // @synthesize tgRerequest=_tgRerequest;
@property(retain, nonatomic) XMCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
@property(retain, nonatomic) XMSegmentTabViewController *tabController; // @synthesize tabController=_tabController;
@property(retain, nonatomic) NSMutableDictionary *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) long long needToAll; // @synthesize needToAll=_needToAll;
@property(copy, nonatomic) NSString *defaultTag; // @synthesize defaultTag=_defaultTag;
@property(retain, nonatomic) NSMutableArray *insertTags; // @synthesize insertTags=_insertTags;
- (void).cxx_destruct;
- (void)postOpenFilterDataTrack;
- (void)postOpenDetailCtrDataTrackWithPostion:(long long)arg1 keyword:(id)arg2;
- (void)postOpenRecCtrDataTrackWithPostion:(long long)arg1;
- (void)hideTagView;
- (void)onTagClicked:(id)arg1;
- (void)onRightButtonClicked:(id)arg1;
- (void)onCancel;
- (void)onFinishWith:(long long)arg1 condition:(long long)arg2 state:(long long)arg3;
- (void)categoryRecRequestFinished;
- (void)categoryRecRequestBegin;
- (void)saveCategoryTags:(id)arg1;
- (void)loadCategoryTags;
- (void)categoryTag:(id)arg1;
- (id)viewControllerWithTitle:(id)arg1;
- (void)segmentCtrol:(id)arg1 transitionAtController:(id)arg2;
- (id)segmentCtrol:(id)arg1 controllerAtIndex:(long long)arg2;
- (id)segmentCtrolTitles:(id)arg1;
- (void)saveGenderAndPostNotification:(id)arg1;
- (void)genderChange:(id)arg1;
- (void)hiddenTabView;
- (void)onSearchButton:(id)arg1;
- (void)onFilterButton;
- (void)onBackButtonButton:(id)arg1;
- (void)addTopView;
- (void)renewRightNavButton;
- (void)updateCategoryInfoFromDic:(id)arg1;
- (void)updateKeywordDataFromDict:(id)arg1;
- (void)retrieveDataFailedSelector:(id)arg1;
- (void)retrieveDataFinishedSelector:(id)arg1;
- (void)requestTagName;
- (id)segmentRightView;
- (void)addTabController;
- (void)onLowMemory;
- (void)alReadyBuy;
- (void)didReceiveMemoryWarning;
- (_Bool)navigationBarBottomLineHidden;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCategoryItem:(id)arg1;
- (id)initWithPaidCategoryId:(long long)arg1 categoryTitle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

