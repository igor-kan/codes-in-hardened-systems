"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 352."""

def spec_graphene_hardened_malloc_352() -> dict:
    return {"system": "GrapheneOS", "spec_id": 352, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_352():
    s = spec_graphene_hardened_malloc_352()
    assert s["spec_id"] == 352
