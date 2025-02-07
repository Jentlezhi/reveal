//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMTableViewDelegateProtocol-Protocol.h"
#import "XMVXPageViewSubControllerProtocol-Protocol.h"

@class CAShapeLayer, NSMutableArray, NSString, UILabel, UITableView, UIView, XMNRequest, XMPayAlbumRankTabModel, XMTableViewDataSource;

@interface XMPayAlbumRankListViewController : XMSubLevelViewController <XMTableViewDelegateProtocol, XMVXPageViewSubControllerProtocol>
{
    _Bool _hasMore;
    _Bool _tabReqSucess;
    double _footerHeight;
    long long _categoryID;
    CAShapeLayer *_maskLayer;
    NSMutableArray *_tabModels;
    UITableView *_tabTableView;
    XMTableViewDataSource *_tabDataSource;
    XMTableViewDataSource *_listDataSource;
    long long _nextPageID;
    XMPayAlbumRankTabModel *_currentTabModel;
    XMNRequest *_req;
    UIView *_tipsHeader;
    UILabel *_dateLabel;
}

@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UIView *tipsHeader; // @synthesize tipsHeader=_tipsHeader;
@property(nonatomic) _Bool tabReqSucess; // @synthesize tabReqSucess=_tabReqSucess;
@property(retain, nonatomic) XMNRequest *req; // @synthesize req=_req;
@property(retain, nonatomic) XMPayAlbumRankTabModel *currentTabModel; // @synthesize currentTabModel=_currentTabModel;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long nextPageID; // @synthesize nextPageID=_nextPageID;
@property(retain, nonatomic) XMTableViewDataSource *listDataSource; // @synthesize listDataSource=_listDataSource;
@property(retain, nonatomic) XMTableViewDataSource *tabDataSource; // @synthesize tabDataSource=_tabDataSource;
@property(retain, nonatomic) UITableView *tabTableView; // @synthesize tabTableView=_tabTableView;
@property(retain, nonatomic) NSMutableArray *tabModels; // @synthesize tabModels=_tabModels;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) long long categoryID; // @synthesize categoryID=_categoryID;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
- (void).cxx_destruct;
- (id)yearMonthDayWithDate:(id)arg1;
- (void)updateHeaderTitleWithInterval:(double)arg1;
- (id)vxContentScrollView;
- (_Bool)shouldShowNoNetView;
- (_Bool)isLoadMoreViewNeeded;
- (void)triggerLoadMore;
- (void)triggerPullToRefresh;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (void)parseRankListResponseJSON:(id)arg1;
- (void)requestAlbumRankList;
- (void)parseResponseTabJSON:(id)arg1;
- (void)requestPeakTabs;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCategoryId:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

