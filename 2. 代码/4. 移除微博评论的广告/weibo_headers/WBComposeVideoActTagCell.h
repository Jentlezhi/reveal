//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class WBComposeVideoActTagInfoView, WBComposeVideoActivityTagModel, WBComposeVideoTagVCTableViewManager;

@interface WBComposeVideoActTagCell : UITableViewCell
{
    WBComposeVideoTagVCTableViewManager *_tableManager;
    WBComposeVideoActTagInfoView *_tagInfoView;
    WBComposeVideoActivityTagModel *_model;
}

+ (double)viewHeight:(id)arg1;
@property(retain, nonatomic) WBComposeVideoActivityTagModel *model; // @synthesize model=_model;
@property(retain, nonatomic) WBComposeVideoActTagInfoView *tagInfoView; // @synthesize tagInfoView=_tagInfoView;
@property(nonatomic) __weak WBComposeVideoTagVCTableViewManager *tableManager; // @synthesize tableManager=_tableManager;
- (void).cxx_destruct;
- (void)tagInfoView:(id)arg1 handleTaskWithModel:(id)arg2;
- (void)itemAction:(id)arg1;
- (void)loadData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

