//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSearchBaseViewController.h"

@class NSArray, NSString, XMNRequest, XMSearchFilterModel;

@interface XMSearchPersonViewController : XMSearchBaseViewController
{
    NSString *_core;
    XMSearchFilterModel *_filterModel;
    XMNRequest *_searchReq;
    NSArray *_conditions;
}

@property(retain, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
@property(retain, nonatomic) XMNRequest *searchReq; // @synthesize searchReq=_searchReq;
@property(retain, nonatomic) XMSearchFilterModel *filterModel; // @synthesize filterModel=_filterModel;
@property(retain, nonatomic) NSString *core; // @synthesize core=_core;
- (void).cxx_destruct;
- (void)exposureObjectDataTrack;
- (void)scrollViewDidEndDeceleratingAction;
- (void)postSearchPersonDataTrack;
- (void)shareUser:(id)arg1;
- (void)followUser:(id)arg1;
- (void)longPressUserCellDidLongPress:(id)arg1;
- (void)longPressUserCellDidClickCommunity:(id)arg1;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (void)triggerLoadMore;
- (_Bool)isLoadMoreViewNeeded;
- (void)filterDidSelectModel:(id)arg1;
- (void)clearCurrentSearchResults;
- (void)paraseResponseJSON:(id)arg1;
- (void)searchReqFetchDataIsDefautl:(_Bool)arg1;
- (void)searchWithSearchWord:(id)arg1;
- (void)dealloc;
- (void)postScrollToTopDataTrack;
- (void)postSearchDataTrack;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

