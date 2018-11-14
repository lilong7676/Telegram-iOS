#import "TGBridgeMediaAttachment.h"
#import <CoreGraphics/CoreGraphics.h>

@interface TGBridgeImageMediaAttachment : TGBridgeMediaAttachment

@property (nonatomic, assign) int64_t imageId;
@property (nonatomic, assign) CGSize dimensions;

@end
