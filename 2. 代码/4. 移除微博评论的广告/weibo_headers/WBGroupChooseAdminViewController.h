//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBGroupMemberBaseViewController.h"

@class NSArray;

@interface WBGroupChooseAdminViewController : WBGroupMemberBaseViewController
{
    NSArray *_existAdmins;
}

@property(retain, nonatomic) NSArray *existAdmins; // @synthesize existAdmins=_existAdmins;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)didselectContact:(id)arg1 searchType:(int)arg2;
- (id)originContactsArray;
- (id)titleForNavigationBar;
- (void)viewDidLoad;

@end

