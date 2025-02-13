//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UITableView, WBHTTPRequestOperationWrapper, WBVideoFooterErrorPRLMTableViewWrapper;

@interface WBVideoVideoListViewModel : NSObject
{
    NSArray *_cellModels;
    WBHTTPRequestOperationWrapper *_reloadWrapper;
    WBHTTPRequestOperationWrapper *_loadMoreWrapper;
    long long _cursor;
    _Bool _bulletinEnable;
    UITableView *_tableView;
    WBVideoFooterErrorPRLMTableViewWrapper *_prlmWrapper;
    WBHTTPRequestOperationWrapper *_loadBulletinWrapper;
}

@property(nonatomic) _Bool bulletinEnable; // @synthesize bulletinEnable=_bulletinEnable;
@property(nonatomic) long long cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) WBHTTPRequestOperationWrapper *loadBulletinWrapper; // @synthesize loadBulletinWrapper=_loadBulletinWrapper;
@property(retain, nonatomic) WBHTTPRequestOperationWrapper *loadMoreWrapper; // @synthesize loadMoreWrapper=_loadMoreWrapper;
@property(retain, nonatomic) WBHTTPRequestOperationWrapper *reloadWrapper; // @synthesize reloadWrapper=_reloadWrapper;
@property(retain, nonatomic) NSArray *cellModels; // @synthesize cellModels=_cellModels;
@property(nonatomic) __weak WBVideoFooterErrorPRLMTableViewWrapper *prlmWrapper; // @synthesize prlmWrapper=_prlmWrapper;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)updateVideo:(id)arg1 editInfo:(id)arg2;
- (void)addVideo:(id)arg1 toAlbums:(id)arg2;
- (id)albumModelsForVideo:(id)arg1;
- (unsigned long long)indexOfVideoModel:(id)arg1;
- (void)updateTableView:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (_Bool)isEmptyListAfterRemoveObjectAtIndex:(unsigned long long)arg1;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)deleteVideo:(id)arg1 params:(id)arg2;
- (void)removeVideo:(id)arg1;
- (_Bool)isEmptyList;
- (_Bool)hasMore;
- (void)loadMoreVideoList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadVideoList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadVideoList:(id)arg1 bulletin:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)requestPath;
- (void)dealloc;
- (id)init;

@end

