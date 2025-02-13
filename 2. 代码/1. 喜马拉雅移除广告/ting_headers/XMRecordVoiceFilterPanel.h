//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMRecordFloatPanel.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView, XMAudioFilter, XMEchoFilter, XMEchoFilterConfig, XMMorphFilter, XMSolaFilter, XMVoiceFilterConfig;
@protocol XMRecordVoiceFilterPanelDelegate;

@interface XMRecordVoiceFilterPanel : XMRecordFloatPanel <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <XMRecordVoiceFilterPanelDelegate> _delegate;
    UICollectionView *_collectionView;
    NSArray *_imageArray;
    XMAudioFilter *_currentVoiceFilter;
    XMAudioFilter *_currentEchoFilter;
    XMSolaFilter *_solaFilter;
    XMMorphFilter *_morphFilter;
    XMAudioFilter *_brightFilter;
    XMEchoFilter *_echoFilter;
    XMEchoFilter *_reverbFilter;
    NSArray *_configArray;
    XMVoiceFilterConfig *_currentVoiceFilterConfig;
    XMVoiceFilterConfig *_currentEchoFilterConfig;
    XMEchoFilterConfig *_configEchoOrign;
    XMVoiceFilterConfig *_vconfigOrign;
    XMEchoFilterConfig *_configAuditorium;
    XMEchoFilterConfig *_configVocal;
    XMVoiceFilterConfig *_vconfigRobot;
    XMVoiceFilterConfig *_vconfigMinions;
    XMVoiceFilterConfig *_vconfigMale;
    XMVoiceFilterConfig *_vconfigFemale;
}

@property(retain, nonatomic) XMVoiceFilterConfig *vconfigFemale; // @synthesize vconfigFemale=_vconfigFemale;
@property(retain, nonatomic) XMVoiceFilterConfig *vconfigMale; // @synthesize vconfigMale=_vconfigMale;
@property(retain, nonatomic) XMVoiceFilterConfig *vconfigMinions; // @synthesize vconfigMinions=_vconfigMinions;
@property(retain, nonatomic) XMVoiceFilterConfig *vconfigRobot; // @synthesize vconfigRobot=_vconfigRobot;
@property(retain, nonatomic) XMEchoFilterConfig *configVocal; // @synthesize configVocal=_configVocal;
@property(retain, nonatomic) XMEchoFilterConfig *configAuditorium; // @synthesize configAuditorium=_configAuditorium;
@property(retain, nonatomic) XMVoiceFilterConfig *vconfigOrign; // @synthesize vconfigOrign=_vconfigOrign;
@property(retain, nonatomic) XMEchoFilterConfig *configEchoOrign; // @synthesize configEchoOrign=_configEchoOrign;
@property(retain, nonatomic) XMVoiceFilterConfig *currentEchoFilterConfig; // @synthesize currentEchoFilterConfig=_currentEchoFilterConfig;
@property(retain, nonatomic) XMVoiceFilterConfig *currentVoiceFilterConfig; // @synthesize currentVoiceFilterConfig=_currentVoiceFilterConfig;
@property(retain, nonatomic) NSArray *configArray; // @synthesize configArray=_configArray;
@property(retain, nonatomic) XMEchoFilter *reverbFilter; // @synthesize reverbFilter=_reverbFilter;
@property(retain, nonatomic) XMEchoFilter *echoFilter; // @synthesize echoFilter=_echoFilter;
@property(retain, nonatomic) XMAudioFilter *brightFilter; // @synthesize brightFilter=_brightFilter;
@property(retain, nonatomic) XMMorphFilter *morphFilter; // @synthesize morphFilter=_morphFilter;
@property(retain, nonatomic) XMSolaFilter *solaFilter; // @synthesize solaFilter=_solaFilter;
@property(retain, nonatomic) XMAudioFilter *currentEchoFilter; // @synthesize currentEchoFilter=_currentEchoFilter;
@property(retain, nonatomic) XMAudioFilter *currentVoiceFilter; // @synthesize currentVoiceFilter=_currentVoiceFilter;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <XMRecordVoiceFilterPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showOnView:(id)arg1;
- (void)hide;
- (void)changeStatusEchoFilterConfig:(id)arg1 on:(_Bool)arg2;
- (void)changeToEchoConfig:(id)arg1;
- (id)echoFilterWithConfig:(id)arg1;
- (void)changeToVoiceConfig:(id)arg1;
- (id)voiceFilterWithConfig:(id)arg1;
- (void)changeStatusVoiceFilterConfig:(id)arg1 on:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onEarStatuChanged;
- (void)loadData;
- (void)setupViews;
- (void)reset;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

