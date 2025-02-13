//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

@class NSDictionary, NSString, WBCustomSwitchControl, WBQAQuestion;

@interface WBNoteProQAComposeSettingViewController : WBTableViewController
{
    WBQAQuestion *_question;
    CDUnknownBlockType _selectVisibleBlock;
    WBCustomSwitchControl *_secretSwitch;
    long long _currentIndex;
    long long _ask_attr;
    NSString *_chooseTitle;
    NSDictionary *_dict;
}

@property(retain, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
@property(copy, nonatomic) NSString *chooseTitle; // @synthesize chooseTitle=_chooseTitle;
@property(nonatomic) long long ask_attr; // @synthesize ask_attr=_ask_attr;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) WBCustomSwitchControl *secretSwitch; // @synthesize secretSwitch=_secretSwitch;
@property(copy, nonatomic) CDUnknownBlockType selectVisibleBlock; // @synthesize selectVisibleBlock=_selectVisibleBlock;
@property(retain, nonatomic) WBQAQuestion *question; // @synthesize question=_question;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)comebackButtonPressed:(id)arg1;
- (void)viewDidLoad;
- (id)initWithDict:(id)arg1;
- (id)init;

@end

