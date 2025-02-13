//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AEFloatConverter : NSObject
{
    struct AudioStreamBasicDescription _sourceAudioDescription;
    struct AudioStreamBasicDescription _floatAudioDescription;
    struct OpaqueAudioConverter *_toFloatConverter;
    struct OpaqueAudioConverter *_fromFloatConverter;
    struct AudioBufferList *_scratchFloatBufferList;
    int _floatFormatChannelsPerFrame;
}

@property(nonatomic) int floatFormatChannelsPerFrame; // @synthesize floatFormatChannelsPerFrame=_floatFormatChannelsPerFrame;
@property(nonatomic) struct AudioStreamBasicDescription sourceFormat; // @synthesize sourceFormat=_sourceAudioDescription;
@property(readonly, nonatomic) struct AudioStreamBasicDescription floatingPointAudioDescription;
- (void)updateFormats;
- (void)dealloc;
- (id)initWithSourceFormat:(struct AudioStreamBasicDescription)arg1;

@end

