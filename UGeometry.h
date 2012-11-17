//
//  UGeometry.h
//  BMSDisplay
//
//  Created by Corbin Dunn on 11/17/12 .
//
//

#ifndef UGeometry_h
#define UGeometry_h

typedef struct {
    int x;
    int y;
} UPoint;

typedef struct {
    int width;
    int height;
} USize;

typedef struct {
    UPoint origin;
    USize size;
} URect;

static inline int URectMinX(URect r) { return r.origin.x; }
static inline int URectMinY(URect r) { return r.origin.y; }
static inline int URectMaxX(URect r) { return r.origin.x + r.size.width; }
static inline int URectMaxY(URect r) { return r.origin.y + r.size.height; }
static inline int URectHeight(URect r) { return r.size.height; }
static inline int URectWidth(URect r) { return r.size.width; }
static inline bool URectIsEmpty(URect r) { return r.size.height > 0 && r.size.width > 0; }
static inline URect URectMake(int x, int y, int width, int height) {
    URect r = { x, y, width, height };
    return r;
}
static inline bool URectIsEqual(URect r1, URect r2) {
    return r1.origin.x == r2.origin.x && r1.origin.y == r2.origin.y && r1.size.width == r2.size.width && r1.size.height == r2.size.height;
}

#endif
