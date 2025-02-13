//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMChatBaseScrollVC.h"

@class NSString, UIButton, UIView;

@interface XMMomentChooseTopicsViewController : XMChatBaseScrollVC
{
    _Bool _communityHasTopic;
    unsigned long long _idolId;
    long long _chooseType;
    long long _searchType;
    NSString *_contentType;
    unsigned long long _communityId;
    CDUnknownBlockType _chooseFinishBlock;
    CDUnknownBlockType _hookFinishBlock;
    UIView *_searchHolderView;
    UIButton *_searchButton;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UIView *searchHolderView; // @synthesize searchHolderView=_searchHolderView;
@property(copy, nonatomic) CDUnknownBlockType hookFinishBlock; // @synthesize hookFinishBlock=_hookFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType chooseFinishBlock; // @synthesize chooseFinishBlock=_chooseFinishBlock;
@property(nonatomic) unsigned long long communityId; // @synthesize communityId=_communityId;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long searchType; // @synthesize searchType=_searchType;
@property(nonatomic) long long chooseType; // @synthesize chooseType=_chooseType;
@property(nonatomic) unsigned long long idolId; // @synthesize idolId=_idolId;
- (void).cxx_destruct;
- (void)didSelectTopic:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)requestMoreData:(_Bool)arg1 showLoadingHud:(_Bool)arg2;
- (void)clickSearchButton:(id)arg1;
- (void)viewDidLoad;
- (void)didInitialize;

@end

