//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "XMEntertainHomeTopViewDelegate-Protocol.h"
#import "XMLiveEntHomeCollectionCellDelegate-Protocol.h"
#import "XMVXPageViewSubControllerProtocol-Protocol.h"

@class NSMutableArray, NSString, UIView, XMEntertainHomeTopView, XMLiveEntHomeCategoryItem, XMNRequest;
@protocol XMLiveRoomEntHomeListDelegate;

@interface XMLiveRoomEntHomeListVC : XMBaseTabelVC <XMLiveEntHomeCollectionCellDelegate, XMEntertainHomeTopViewDelegate, UIScrollViewDelegate, XMVXPageViewSubControllerProtocol>
{
    _Bool _netError;
    _Bool _hasMore;
    long long _pageNum;
    double _lastShowTimeStamp;
    unsigned int _curModeColorHex;
    _Bool _useDarkSkin;
    id <XMLiveRoomEntHomeListDelegate> _delegate;
    XMLiveEntHomeCategoryItem *_category;
    CDUnknownBlockType _refreshAction;
    XMEntertainHomeTopView *_homeFavView;
    UIView *_headerView;
    XMNRequest *_favoriteReq;
    XMNRequest *_homePageReq;
    NSMutableArray *_favoriateEntertainList;
    NSMutableArray *_homeEntertainList;
    UIView *_adBannerView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *adBannerView; // @synthesize adBannerView=_adBannerView;
@property(retain, nonatomic) NSMutableArray *homeEntertainList; // @synthesize homeEntertainList=_homeEntertainList;
@property(retain, nonatomic) NSMutableArray *favoriateEntertainList; // @synthesize favoriateEntertainList=_favoriateEntertainList;
@property(retain, nonatomic) XMNRequest *homePageReq; // @synthesize homePageReq=_homePageReq;
@property(retain, nonatomic) XMNRequest *favoriteReq; // @synthesize favoriteReq=_favoriteReq;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) XMEntertainHomeTopView *homeFavView; // @synthesize homeFavView=_homeFavView;
@property(nonatomic) _Bool useDarkSkin; // @synthesize useDarkSkin=_useDarkSkin;
@property(copy, nonatomic) CDUnknownBlockType refreshAction; // @synthesize refreshAction=_refreshAction;
@property(retain, nonatomic) XMLiveEntHomeCategoryItem *category; // @synthesize category=_category;
@property(nonatomic) __weak id <XMLiveRoomEntHomeListDelegate> delegate; // @synthesize delegate=_delegate;
- (double)nodataCellHeight;
- (double)heightOffset;
- (id)vxContentScrollView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)uploadHomePageTrackData;
- (void)onCollectionViewDidClick:(id)arg1;
- (void)insertAdBanner:(id)arg1;
- (void)onEntertainRoomClick:(id)arg1;
- (void)refreshHeaderView;
- (void)loadMyFavoriteList;
- (void)loadHomeEntertainList:(long long)arg1;
- (void)loadMore;
- (void)pullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

