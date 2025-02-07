//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

@class NSMutableArray, UILabel, XMServerRequest;

@interface XMMyLottoryViewController : XMSubLevelViewController
{
    NSMutableArray *_lottoryArray;
    UILabel *_lottoryCountLabel;
    XMServerRequest *_lottoryRequest;
}

@property(retain, nonatomic) XMServerRequest *lottoryRequest; // @synthesize lottoryRequest=_lottoryRequest;
@property(retain, nonatomic) UILabel *lottoryCountLabel; // @synthesize lottoryCountLabel=_lottoryCountLabel;
@property(retain, nonatomic) NSMutableArray *lottoryArray; // @synthesize lottoryArray=_lottoryArray;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestShakeAdRewardFailed:(id)arg1;
- (void)requestShakeAdRewardFinished:(id)arg1;
- (void)requestMyLottories;
- (void)moveExpiredLottoryToBackend;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

@end

