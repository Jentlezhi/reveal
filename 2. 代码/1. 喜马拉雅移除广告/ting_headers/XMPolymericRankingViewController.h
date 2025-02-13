//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMVXPageViewControllerDataSource-Protocol.h"
#import "XMVXPageViewControllerDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UIView, XMCategoryItem, XMPolymericRankItem, XMSegmentControl, XMServerRequest, XMVXPageViewController;

@interface XMPolymericRankingViewController : XMSubLevelViewController <XMVXPageViewControllerDelegate, XMVXPageViewControllerDataSource>
{
    _Bool _reqSuccess;
    XMCategoryItem *_categoryItem;
    NSArray *_tagsArray;
    NSMutableDictionary *_viewControllers;
    UIButton *_shareButton;
    XMServerRequest *_rankRequest;
    XMPolymericRankItem *_polymericRankItem;
    UIView *_navView;
    UILabel *_titleLabel;
    XMVXPageViewController *_pageVc;
    XMSegmentControl *_segmentedControl;
    UIImageView *_logoBg;
    UILabel *_bigTitleLabel;
}

@property(retain, nonatomic) UILabel *bigTitleLabel; // @synthesize bigTitleLabel=_bigTitleLabel;
@property(retain, nonatomic) UIImageView *logoBg; // @synthesize logoBg=_logoBg;
@property(retain, nonatomic) XMSegmentControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) XMVXPageViewController *pageVc; // @synthesize pageVc=_pageVc;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *navView; // @synthesize navView=_navView;
@property(nonatomic) _Bool reqSuccess; // @synthesize reqSuccess=_reqSuccess;
@property(retain, nonatomic) XMPolymericRankItem *polymericRankItem; // @synthesize polymericRankItem=_polymericRankItem;
@property(retain, nonatomic) XMServerRequest *rankRequest; // @synthesize rankRequest=_rankRequest;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) NSMutableDictionary *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) NSArray *tagsArray; // @synthesize tagsArray=_tagsArray;
@property(retain, nonatomic) XMCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
- (void).cxx_destruct;
- (void)onShare;
- (id)viewControllerAtIndex:(long long)arg1;
- (id)vxPageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)vxPageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)vxPageViewController:(id)arg1 floatingViewOriginDidChange:(struct CGPoint)arg2;
- (void)vxPageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)postStatic:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)shouldShowNoNetView;
- (_Bool)shouldShowEmptyView;
- (void)onFailed:(id)arg1;
- (void)onFinished:(id)arg1;
- (void)requestRankData;
- (void)triggerPullToRefresh;
- (void)reloadSegmentControl;
- (void)updateHeaderView:(id)arg1;
- (void)setupPageVC;
- (void)setupNav;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithPolymericRankItem:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

