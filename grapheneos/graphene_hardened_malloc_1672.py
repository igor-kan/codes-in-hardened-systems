"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1672."""

def spec_graphene_hardened_malloc_1672() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1672, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1672():
    s = spec_graphene_hardened_malloc_1672()
    assert s["spec_id"] == 1672
