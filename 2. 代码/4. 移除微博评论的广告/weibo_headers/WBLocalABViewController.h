//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WBDebugPageProtocol-Protocol.h"

@class NSString, UITextField;

@interface WBLocalABViewController : UIViewController <WBDebugPageProtocol>
{
    UITextField *_dIDTestField;
    UITextField *_abInfoIDTestField;
}

+ (void)debugCellDidClick:(id)arg1;
+ (id)debugTitle;
@property(retain, nonatomic) UITextField *abInfoIDTestField; // @synthesize abInfoIDTestField=_abInfoIDTestField;
@property(retain, nonatomic) UITextField *dIDTestField; // @synthesize dIDTestField=_dIDTestField;
- (void).cxx_destruct;
- (id)getABDataFromLocalFile;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateLocalDeviceId;
- (void)lockLocalABFile;
- (id)getABDataString;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

