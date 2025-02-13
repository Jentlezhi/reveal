//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIViewController, XMNRequest, XMServerRequest;

@interface XMHearRecommendViewModel : NSObject
{
    _Bool _hasMore;
    _Bool _hiddenFavBtn;
    _Bool _isExecuting;
    XMServerRequest *listDataRequest;
    CDUnknownBlockType _reloadCallBack;
    CDUnknownBlockType _refreshCallBack;
    UIViewController *_vc;
    NSMutableArray *_recommendArray;
    NSMutableArray *_items;
    long long _pageId;
    XMNRequest *_request;
}

@property(retain, nonatomic) XMNRequest *request; // @synthesize request=_request;
@property(nonatomic) long long pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableArray *recommendArray; // @synthesize recommendArray=_recommendArray;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(copy, nonatomic) CDUnknownBlockType refreshCallBack; // @synthesize refreshCallBack=_refreshCallBack;
@property(copy, nonatomic) CDUnknownBlockType reloadCallBack; // @synthesize reloadCallBack=_reloadCallBack;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) _Bool hiddenFavBtn; // @synthesize hiddenFavBtn=_hiddenFavBtn;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) XMServerRequest *listDataRequest; // @synthesize listDataRequest;
- (void).cxx_destruct;
- (void)albumRecCellFavDidClick:(id)arg1;
- (void)openWithIndexPath:(id)arg1;
- (void)onChangeFavStateSuccess:(id)arg1;
- (void)reloadDataWithIndex:(long long)arg1;
- (void)triggerLoadMore;
- (void)triggerPullToRefresh;
- (id)init;
@property(readonly, nonatomic) NSMutableArray *datas;

@end

